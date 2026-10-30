
int FUN_0044c8e0(char *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined2 local_22;
  char local_20 [32];
  
  local_22 = DAT_00548004;
  iVar3 = 0;
  bVar2 = 0;
  if (param_1 != (char *)0x0) {
    _strncpy(local_20,param_1,0x1f);
    iVar1 = FUN_004bcef7(local_20,&local_22);
    while (iVar1 != 0) {
      iVar1 = FUN_004bd32f(iVar1);
      iVar3 = iVar3 + (iVar1 << (bVar2 & 0x1f));
      iVar1 = FUN_004bcef7(0,&local_22);
      bVar2 = bVar2 + 8;
    }
  }
  return iVar3;
}

