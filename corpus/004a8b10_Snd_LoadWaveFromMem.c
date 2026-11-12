
/* sweep: guess */

int * Snd_LoadWaveFromMem(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte *pbVar7;
  
  if (*param_1 != DAT_0055e4a4) {
    param_1 = (int *)Audio_DecodeWave(param_1);
    if (*param_1 == DAT_0055e4a4) {
      return param_1;
    }
    puVar6 = (ushort *)(param_1 + 0xb);
    *param_1 = DAT_0055e4a4;
    pbVar7 = (byte *)(param_1 + 4);
    iVar2 = param_1[10];
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 1;
    param_1[2] = ((param_1[6] << 4) / 0x5622) * 0x1000000;
    if (*(short *)((int)param_1 + 0x22) == 0x10) {
      iVar2 = iVar2 >> 1;
      param_1[1] = iVar2;
      uVar4 = 0;
      iVar3 = iVar2;
      puVar5 = puVar6;
      do {
        uVar1 = *puVar5;
        if ((short)uVar1 < 0) {
          uVar1 = -uVar1;
        }
        if (uVar4 <= uVar1) {
          uVar4 = (uint)uVar1;
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      do {
        *pbVar7 = (byte)((uint)((int)(short)*puVar6 * (int)(0x7eff0000 / (ulonglong)uVar4) +
                               0x800000) >> 0x18) ^ 0x80;
        puVar6 = puVar6 + 1;
        pbVar7 = pbVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return param_1;
    }
    param_1[1] = iVar2;
    do {
      *pbVar7 = (byte)*puVar6;
      puVar6 = (ushort *)((int)puVar6 + 1);
      pbVar7 = pbVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}

