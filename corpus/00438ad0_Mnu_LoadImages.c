
/* sweep */

void Mnu_LoadImages(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_4c [64];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Cbin_SelectGroup(&DAT_0053fdf0);
  if (iVar1 != 0) {
    iVar1 = Cbin_IterField_Global(&DAT_0053fdec,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar2 = local_4c;
      for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = (char *)_strtok(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_4c,pcVar2,0x3f);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_c = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_8 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_4 = _atoi(uVar3);
      Mnu_AddImageRef(param_1,local_4c);
      iVar1 = Cbin_IterField_Global(&DAT_0053fdec,&DAT_005a41e0,0x100,0);
    }
  }
  _qsort(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x54),0x4c,&LAB_004397a0);
  return;
}

