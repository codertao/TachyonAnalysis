
/* refine: slot 0x10 lookup then Join (slot 0x3c) */

undefined4 NetDrv_JoinSessionById(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0055e3e0 == 0) {
    return 0xffffffff;
  }
  iVar1 = NetDrv_FindSessionById(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = NetDrv_JoinSession(iVar1,param_2);
  return uVar2;
}

