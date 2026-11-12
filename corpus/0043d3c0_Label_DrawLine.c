
/* sweep */

void Label_DrawLine(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,int param_6
                   )

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char local_e2 [2];
  void *local_e0;
  int local_dc;
  undefined4 local_d8 [16];
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  char local_40 [64];
  
  if (param_2 == (char *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  iVar3 = param_3;
  if (*param_2 == '~') {
    param_2 = param_2 + 1;
    pcVar4 = local_40;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    }
    pcVar4 = local_40;
    cVar2 = *param_2;
    iVar3 = param_6;
    while (param_6 = iVar3 + -1, cVar2 != '~') {
      *pcVar4 = cVar2;
      pcVar1 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
      param_2 = param_2 + 1;
      iVar3 = param_6;
      cVar2 = *pcVar1;
    }
    if (*param_2 == '~') {
      param_2 = param_2 + 1;
      param_6 = iVar3 + -2;
    }
    iVar3 = Mnu_FindFont(param_1,local_40);
    if (iVar3 != 0) {
      puVar6 = (undefined4 *)(iVar3 + 0x70);
      puVar7 = local_8c;
      for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = (undefined4 *)(iVar3 + 0xbc);
      puVar7 = local_d8;
      for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_e0 = (void *)(iVar3 + 0x50);
      Font_SetColorRamp(local_4c,local_48,local_44,local_98,local_94,local_90);
      if (local_e0 != (void *)0x0) goto LAB_0043d4db;
    }
  }
  local_e0 = (void *)(param_3 + 0x50);
  if (local_e0 == (void *)0x0) {
    return;
  }
LAB_0043d4db:
  str_sprintf(local_e2,&DAT_0053ebdc,(int)*param_2);
  Mnu_DrawText(param_1,iVar3,local_e2,&local_dc,0);
  call_Font_DrawStringClipped(local_e2,local_e0,param_4,param_5,0,0,0);
  Label_DrawLine(param_1,param_2 + 1,iVar3,local_dc + param_4,param_5,param_6 + -1);
  return;
}

