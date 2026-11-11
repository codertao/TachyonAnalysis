
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bace0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  param_2 = param_2 * 0x30;
  piVar3 = (int *)(&DAT_006b0f60 + param_2);
  iVar1 = 0;
  iVar2 = 0;
  if ((byte)(&DAT_006b0f78)[param_2] == param_1) {
    if (*(int *)(&DAT_006b0f74 + param_2) == 0) {
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0xb]) {
        if (piVar3[10] != 0) {
          if (DAT_006c8f74 != piVar3[4]) {
            FUN_004ad290(piVar3[4]);
            DAT_006c8f74 = piVar3[4];
          }
          DAT_004e4a2c = DAT_006c8f74 >> 0x18;
          _DAT_006b0f40 = 1;
          _DAT_006c8f60 = 1;
          FUN_004ada40(*(undefined4 *)(piVar3[1] + 0x1c),0);
          if (*piVar3 == 0) {
            Gfx_SetTexture(piVar3[1],*(undefined4 *)(piVar3[1] + 0xc));
          }
          else {
            FUN_004ada40(*(undefined4 *)(piVar3[2] + 0x1c),1);
            FUN_004ad240(piVar3[1],*(undefined4 *)(piVar3[1] + 0xc),piVar3[2],
                         *(undefined4 *)(piVar3[2] + 0xc),piVar3[3]);
          }
          Gfx_DrawPolyBatch(piVar3[7],piVar3[9],piVar3[8],piVar3[10],
                            *(undefined4 *)(piVar3[1] + 0xc));
          iVar1 = iVar1 + piVar3[10];
          iVar2 = iVar2 + piVar3[9];
        }
        FUN_00445720(piVar3);
        piVar3[5] = 1;
      }
    }
    DAT_006c8f84 = DAT_006c8f84 + iVar1;
    DAT_006c8f8c = DAT_006c8f8c + iVar2;
  }
  return;
}

