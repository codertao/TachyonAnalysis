
/* sweep */

void Input_RebuildBindings(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = &DAT_005af7dc;
  pcVar4 = &DAT_00603a20;
  uVar2 = 0;
  do {
    if ((pcVar4 == (char *)0x0) || (piVar3 == (int *)0x0)) break;
    if ((*pcVar4 != '\0') &&
       ((((iVar1 = *piVar3, iVar1 != 0 && (iVar1 != 1)) && ((*(byte *)(iVar1 + 0x18) & 2) != 0)) &&
        (piVar3[-0x200] != 0)))) {
      (**(code **)(iVar1 + 0x10))(*(undefined4 *)(iVar1 + 0x14),0,DAT_005b3304 - piVar3[-0x200]);
    }
    piVar3 = piVar3 + 1;
    pcVar4 = pcVar4 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x200);
  piVar3 = &DAT_005aeed4;
  uVar2 = 0;
  do {
    if (piVar3 == (int *)0x0) break;
    iVar1 = *piVar3;
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0x18) & 2) != 0)) && (piVar3[0x20] != 0)) {
      (**(code **)(iVar1 + 0x10))(*(undefined4 *)(iVar1 + 0x14),0,DAT_005b3304 - piVar3[0x20]);
    }
    piVar3 = piVar3 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  piVar3 = &DAT_005affe0;
  uVar2 = 0;
  do {
    if (piVar3 == (int *)0x0) break;
    iVar1 = *piVar3;
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0x18) & 2) != 0)) && (piVar3[0x10] != 0)) {
      (**(code **)(iVar1 + 0x10))(*(undefined4 *)(iVar1 + 0x14),0,DAT_005b3304 - piVar3[0x10]);
    }
    piVar3 = piVar3 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  Input_FlushKeyQueue();
  return;
}

