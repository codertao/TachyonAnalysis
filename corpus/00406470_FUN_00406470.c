
void FUN_00406470(uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar2 = param_1;
  FUN_0048e380(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0xc) * 0xc);
  if (param_3 != 0) {
    puVar7 = (uint *)(param_2 + 4);
    param_1 = param_3;
    do {
      piVar5 = (int *)puVar7[1];
      uVar6 = 0;
      if (*puVar7 != 0) {
        do {
          piVar1 = (int *)(*(int *)(iVar2 + 0x10) + *piVar5 * 0xc);
          if (puVar7[-1] != 0) {
            iVar3 = piVar5[1] * 0x80 + *piVar1 * -0x80;
            iVar4 = iVar3 >> 7;
            piVar5[4] = iVar4;
            piVar5[4] = (int)(CONCAT44(iVar3 >> 0x1f,iVar4) / (longlong)(int)puVar7[-1]);
            iVar3 = piVar5[2] * 0x80 + piVar1[1] * -0x80;
            iVar4 = iVar3 >> 7;
            piVar5[5] = iVar4;
            piVar5[5] = (int)(CONCAT44(iVar3 >> 0x1f,iVar4) / (longlong)(int)puVar7[-1]);
            iVar3 = piVar5[3] * 0x80 + piVar1[2] * -0x80;
            iVar4 = iVar3 >> 7;
            piVar5[6] = iVar4;
            piVar5[6] = (int)(CONCAT44(iVar3 >> 0x1f,iVar4) / (longlong)(int)puVar7[-1]);
          }
          *piVar1 = piVar5[1];
          piVar1[1] = piVar5[2];
          piVar1[2] = piVar5[3];
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 7;
        } while (uVar6 < *puVar7);
      }
      uVar6 = puVar7[-1];
      if (uVar6 != 0) {
        puVar7[4] = (int)(puVar7[6] - param_3) / (int)uVar6;
        puVar7[5] = (int)(puVar7[7] - param_2) / (int)uVar6;
      }
      param_3 = puVar7[6];
      param_2 = puVar7[7];
      puVar7 = puVar7 + 0xb;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}

