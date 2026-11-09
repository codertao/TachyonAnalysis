
void FUN_100028c0(void)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (DAT_10007698 != (undefined4 *)0x0) {
    DVar1 = timeGetTime();
    DAT_10019878 = DVar1 - DAT_10019874;
    if (300000 < DAT_10019878) {
      FUN_10002710(0);
    }
    iVar4 = 0;
    puVar5 = DAT_10007698;
    if (0 < DAT_1000769c) {
      do {
        if ((*(short *)((int)puVar5 + 0x12) != 0) &&
           (uVar2 = DVar1 - *(int *)((int)puVar5 + 0x3e), 15000 < uVar2)) {
          if (*(short *)(puVar5 + 4) == 1) {
            if (*(uint *)((int)puVar5 + 0x42) < 0x3c) {
              FUN_10002620(puVar5,1);
            }
            else {
              puVar6 = puVar5;
              for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              *(undefined2 *)puVar6 = 0;
            }
          }
          else if ((*(short *)(puVar5 + 4) == 3) && (120000 < uVar2)) {
            puVar6 = puVar5;
            for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            *(undefined2 *)puVar6 = 0;
          }
        }
        iVar4 = iVar4 + 1;
        puVar5 = (undefined4 *)((int)puVar5 + 0x4a);
      } while (iVar4 < DAT_1000769c);
    }
  }
  return;
}

