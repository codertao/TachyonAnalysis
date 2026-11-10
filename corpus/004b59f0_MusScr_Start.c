
/* find script by name, alloc globals+locals, enter start state */

void MusScr_Start(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  *param_1 = FUN_00445720;
  iVar2 = *(int *)(GLBL_bin_content + 8);
  if (iVar2 != 0) {
    iVar12 = 0;
    if (0 < iVar2) {
      piVar7 = *(int **)(GLBL_bin_content + 0xc);
      do {
        iVar9 = *piVar7;
        if (iVar9 != 0) {
          pbVar4 = (byte *)(iVar9 + 8);
          pbVar10 = param_2;
          do {
            bVar1 = *pbVar4;
            bVar14 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_004b5a52:
              iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_004b5a57;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar14 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_004b5a52;
            pbVar4 = pbVar4 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_004b5a57:
          if (iVar5 == 0) goto LAB_004b5a7a;
        }
        iVar12 = iVar12 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar12 < iVar2);
    }
    iVar9 = **(int **)(GLBL_bin_content + 0xc);
LAB_004b5a7a:
    param_1[1] = iVar9;
    uVar11 = *(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x18);
    puVar6 = (undefined4 *)mem_GetMemEx_probably_alloc(uVar11,4,0,s_Script_Data_Block_0055ef68);
    puVar13 = puVar6;
    for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar13 = 0;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    param_1[2] = puVar6;
    param_1[3] = puVar6;
    param_1[4] = (undefined1 *)(*(int *)(iVar9 + 0x18) + (int)puVar6);
    param_1[5] = *(undefined4 *)(GLBL_bin_content + 0x18);
    param_1[7] = *(undefined4 *)(iVar9 + 0x2c);
    uVar3 = *(undefined4 *)(*(int *)(iVar9 + 0x24) + *(int *)(iVar9 + 0x2c) * 4);
    *param_1 = MusScr_Run;
    param_1[6] = uVar3;
  }
  return;
}

