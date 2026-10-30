
undefined1 * FUN_004645c0(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  switch(param_2) {
  case 1:
    if (*(short *)(param_1 + 0x76) == 1) {
      return &DAT_005b3a38 + (uint)*(ushort *)(param_1 + 0xf2) * 0x44;
    }
    puVar2 = *(undefined1 **)(param_1 + 0x118);
    if (puVar2 == (undefined1 *)0x0) {
      return *(undefined1 **)(*(int *)(param_1 + 0x8c) + 0x18);
    }
    break;
  case 2:
    puVar2 = (undefined1 *)FUN_00464550(param_1);
    return puVar2;
  case 3:
    if (*(short *)(param_1 + 0x11c) != -1) {
      FUN_00436440((int)*(short *)(param_1 + 0x11c),(int)*(short *)(param_1 + 0x11e),param_3);
      FUN_004c82b6(param_3);
      return (undefined1 *)0x0;
    }
    *param_3 = '\0';
  default:
    puVar2 = (undefined1 *)0x0;
    break;
  case 4:
    if (param_3 == (char *)0x0) {
      puVar2 = (undefined1 *)FUN_00458060(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x544));
      return puVar2;
    }
    pcVar3 = (char *)FUN_00458060(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x544));
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar6 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_3 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      param_3 = param_3 + 1;
    }
    return (undefined1 *)0x0;
  case 5:
    puVar2 = *(undefined1 **)(param_1 + 0x118);
    if (puVar2 == (undefined1 *)0x0) {
      return *(undefined1 **)(*(int *)(param_1 + 0x8c) + 0x18);
    }
  }
  return puVar2;
}

