
void FUN_00430980(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  char local_100 [256];
  
  iVar2 = FUN_00430a70(param_2);
  if (iVar2 == 0) {
    uVar3 = FUN_00430910();
    iVar2 = File_Exists(uVar3);
    if (iVar2 == 0) {
      uVar3 = FUN_00430910();
      iVar2 = FUN_004a0d60(uVar3);
      if (iVar2 == -1) {
        return;
      }
      str_sprintf(local_100,s__JNL_ENTRIES__c_c_0053eb80,0xd,10);
      uVar4 = 0xffffffff;
      pcVar5 = local_100;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004a0ef0(local_100,~uVar4 - 1);
    }
    else {
      uVar3 = FUN_00430910();
      iVar2 = FUN_004a0e60(uVar3);
    }
    if (iVar2 != -1) {
      FUN_004a0ed0(0,2);
      str_sprintf(local_100,s_ENTRY__d__s_c_c_0053eb70,param_1,param_2,0xd,10);
      uVar4 = 0xffffffff;
      pcVar5 = local_100;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar2 = FUN_004a0ef0(local_100,~uVar4 - 1);
      if (iVar2 == -1) {
        GetLastError();
      }
      FUN_004a0ec0();
    }
  }
  return;
}

