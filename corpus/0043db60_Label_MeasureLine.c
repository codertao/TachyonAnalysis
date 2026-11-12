
/* sweep */

void Label_MeasureLine(undefined4 param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
                      int param_6,undefined4 param_7)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_46 [2];
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
  uVar5 = (*(int *)(param_3 + 0xb0) << 8 | *(uint *)(param_3 + 0xb4)) << 8 |
          *(uint *)(param_3 + 0xb8);
  uVar6 = (*(int *)(param_3 + 0xfc) << 8 | *(uint *)(param_3 + 0x100)) << 8 |
          *(uint *)(param_3 + 0x104);
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
      iVar7 = *(int *)(iVar3 + 0x238);
      uVar5 = (*(int *)(iVar3 + 0xb0) << 8 | *(uint *)(iVar3 + 0xb4)) << 8 | *(uint *)(iVar3 + 0xb8)
      ;
      uVar6 = (*(int *)(iVar3 + 0xfc) << 8 | *(uint *)(iVar3 + 0x100)) << 8 |
              *(uint *)(iVar3 + 0x104);
      if (iVar7 != 0) goto LAB_0043dc8e;
    }
  }
  iVar7 = *(int *)(param_3 + 0x238);
  if (iVar7 == 0) {
    return;
  }
LAB_0043dc8e:
  if (*param_2 != '\0') {
    str_sprintf(local_46,&DAT_0053ebdc,(int)*param_2);
    Mnu_MeasureText(param_1,iVar3,local_46,&local_44,0);
    *(uint *)(iVar3 + 600) = uVar6;
    *(undefined4 *)(iVar3 + 0x248) = param_7;
    Text_Draw(local_46,iVar7,param_4,param_5,uVar5,0,iVar3 + 0x23c);
    Label_MeasureLine(param_1,param_2 + 1,iVar3,local_44 + param_4,param_5,param_6 + -1,param_7);
  }
  return;
}

