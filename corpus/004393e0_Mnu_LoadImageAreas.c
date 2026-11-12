
/* sweep */

void Mnu_LoadImageAreas(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_130 [64];
  char local_f0 [64];
  char local_b0 [68];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  
  iVar1 = Cbin_SelectGroup(s_IMAGE_AREAS_0053fe30);
  if (iVar1 != 0) {
    iVar1 = Cbin_IterField_Global(s_IMAGE_AREA_0053fe24,&DAT_005a41e0,0x100,0);
    while (iVar1 != 0) {
      pcVar2 = local_130;
      for (iVar1 = 0x4c; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      pcVar2 = (char *)_strtok(&DAT_005a41e0,&DAT_0053ebb4);
      _strncpy(local_f0,pcVar2,0x3f);
      pcVar2 = (char *)_strtok(0,&DAT_0053ebb4);
      _strncpy(local_130,pcVar2,0x3f);
      pcVar2 = (char *)_strtok(0,&DAT_0053ebb4);
      _strncpy(local_b0,pcVar2,0x3f);
      local_5c = MnuImage_Find(param_1,pcVar2);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_6c = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_68 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_4c = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_58 = _atoi(uVar3);
      uVar3 = _strtok(0,&DAT_0053ebb4);
      local_54 = _atoi(uVar3);
      Ui_AddTextToWindow(param_1,local_130,0);
      Ui_AddImageArea(param_1,local_130);
      iVar1 = Cbin_IterField_Global(s_IMAGE_AREA_0053fe24,&DAT_005a41e0,0x100,0);
    }
  }
  return;
}

