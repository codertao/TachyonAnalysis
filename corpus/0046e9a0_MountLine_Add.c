
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void MountLine_Add(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,
                  int param_13,uint param_14)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float10 fVar5;
  
  piVar3 = &DAT_00584280;
  uVar1 = 0;
  do {
    if (piVar3[0x19] == 0) {
      piVar4 = piVar3;
      for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      if (param_5 < 1) {
        param_5 = 0x32;
      }
      piVar3[0x12] = param_6;
      piVar3[0x13] = param_7;
      piVar3[0x14] = param_8;
      piVar3[0x15] = param_9;
      piVar3[0x18] = param_11;
      piVar3[0x10] = param_12;
      piVar3[2] = param_3;
      piVar3[0x11] = param_13;
      piVar3[3] = param_4;
      piVar3[0xf] = param_5;
      piVar3[0xc] = param_5;
      piVar3[1] = param_2;
      piVar3[5] = param_2;
      *piVar3 = param_1;
      piVar3[4] = param_1;
      piVar3[0xe] = param_14;
      piVar3[0xd] = param_14;
      piVar3[6] = (int)((float)(param_3 - param_1) / (float)param_5);
      piVar3[7] = (int)((float)(param_4 - param_2) / (float)param_5);
      if (param_14 == 0) {
        fVar5 = (float10)_DAT_0052e59c;
      }
      else {
        fVar5 = (float10)param_14;
      }
      piVar3[0x1a] = param_10;
      piVar3[0x19] = 1;
      piVar3[8] = (int)(float)((float10)param_12 / fVar5);
      return;
    }
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 0x1b;
  } while (uVar1 < 0x80);
  return;
}

