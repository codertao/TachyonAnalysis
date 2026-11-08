
/* apply one DCB record from snapshot: if DCB id exists -> update existing (KEPT++, 0x5b9060), else
   spawn new (NEW++, 0x5b909c) */

undefined4 * Dcb_ApplyRecord(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((*(byte *)((int)param_1 + 5) & 8) != 0) && (DAT_005b3a14 == DAT_005b3a18)) {
    return param_1 + 7;
  }
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 == 0) {
    iVar1 = TachCli_SpawnReplica(param_1);
    DAT_005b909c = DAT_005b909c + 1;
  }
  else {
    FUN_0041b990(iVar1,&DAT_005b3280);
    Dcb_UpdateFromRecord(iVar1,param_1);
    DAT_005b9060 = DAT_005b9060 + 1;
  }
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xc0) = *(undefined1 *)((int)param_1 + 5);
    *(undefined1 *)(iVar1 + 0xc2) = *(undefined1 *)((int)param_1 + 7);
    *(undefined1 *)(iVar1 + 0xc1) = *(undefined1 *)((int)param_1 + 6);
    FUN_0041b890(iVar1,&DAT_005b3284);
    if ((*(byte *)((int)param_1 + 5) & 0x10) == 0) {
      if (*(int *)(iVar1 + 0xec) != -1) {
        *(undefined4 *)(iVar1 + 0xec) = 1;
      }
    }
    else if (*(int *)(iVar1 + 0xec) != -1) {
      *(int *)(iVar1 + 0xec) = (int)(1000 / (ulonglong)DAT_005b39d0);
    }
  }
  puVar2 = param_1 + 7;
  if ((*(byte *)((int)param_1 + 5) & 8) == 0) {
    puVar2 = param_1 + 6;
  }
  return puVar2;
}

