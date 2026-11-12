
/* build 0x80-byte objective record + text for order type */

void Order_BuildText(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 local_60 [96];
  
  clr_bytes(param_1,0x80);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x1b] = 0;
  switch(param_2) {
  case 0:
    Sped_GetTextById(param_3,param_4,local_60);
    Order_FormatObjective(local_60,0x86,param_1 + 2);
    __strupr(param_1 + 2);
    return;
  case 1:
    Group_FormatName(param_3,param_4,local_60);
    uVar6 = 0x86;
    break;
  case 2:
    Sped_GetTextById(param_3,param_4,local_60);
    Order_FormatObjective(local_60,0x88,param_1 + 2);
    __strupr(param_1 + 2);
    return;
  case 3:
    Group_FormatName(param_3,param_4,local_60);
    uVar6 = 0x88;
    break;
  case 4:
    Sped_GetTextById(param_3,param_4,local_60);
    Order_FormatObjective(local_60,0x8d,param_1 + 2);
    __strupr(param_1 + 2);
    return;
  case 5:
    Group_FormatName(param_3,param_4,local_60);
    uVar6 = 0x8d;
    break;
  case 6:
    Sped_GetTextById(param_3,param_4,local_60);
    Order_FormatObjective(local_60,0x8e,param_1 + 2);
    __strupr(param_1 + 2);
    return;
  case 7:
    Group_FormatName(param_3,param_4,local_60);
    uVar6 = 0x8e;
    break;
  case 8:
    pcVar2 = (char *)Rtxt_GetText(DAT_005a6140,0x8b);
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = (char *)(param_1 + 2);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
    __strupr(param_1 + 2);
    return;
  case 9:
    Order_GetSpecialText(param_3,param_1 + 2);
    __strupr(param_1 + 2);
    return;
  case 0xb:
    Order_GetSpecialText(param_3,param_1 + 2);
    param_1[0x1c] = 0x800000;
    __strupr(param_1 + 2);
    return;
  case 0xc:
    Order_GetSpecialText(param_3,param_1 + 2);
    param_1[0x1c] = 0x1e82ff;
  default:
    __strupr(param_1 + 2);
    return;
  }
  Order_FormatObjective(local_60,uVar6,param_1 + 2);
  __strupr(param_1 + 2);
  return;
}

