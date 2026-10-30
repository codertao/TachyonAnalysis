
void FUN_00491070(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)&DAT_005659b4;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar5 = 0;
  pcVar4 = &DAT_005b3a38;
  if (DAT_005b9014 != 0) {
    puVar6 = &DAT_00565934;
    do {
      if (*pcVar4 == '\0') {
        *(undefined1 *)(puVar6 + -0x20) = 0;
        *(undefined1 *)puVar6 = 0;
        puVar3 = &DAT_00569a80;
        do {
          iVar2 = 0x20;
          puVar1 = puVar3;
          do {
            if (*puVar1 == uVar5) {
              *puVar1 = 0xffffffff;
            }
            puVar1 = puVar1 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          puVar3 = puVar3 + 0x20;
        } while ((int)puVar3 < 0x56aa80);
      }
      else {
        *(undefined1 *)(puVar6 + 0x20) = 1;
      }
      uVar5 = uVar5 + 1;
      pcVar4 = pcVar4 + 0x44;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (uVar5 < DAT_005b9014);
  }
  return;
}

