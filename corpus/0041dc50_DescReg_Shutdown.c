
/* run descriptor +0x48 shutdown and free */

undefined4 DescReg_Shutdown(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 4;
  }
  iVar1 = DescReg_FindByName(param_1,&param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(code **)(iVar1 + 0x48) != (code *)0x0) {
    (**(code **)(iVar1 + 0x48))(iVar1);
    DescReg_Free(param_1);
  }
  return 1;
}

