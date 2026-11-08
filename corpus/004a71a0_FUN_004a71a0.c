
int FUN_004a71a0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  short *psVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  piVar3 = param_2;
  puVar6 = (undefined4 *)0x0;
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (param_2[2] != 0)) {
    psVar7 = (short *)(param_1 + 0x14);
    uVar8 = 0x12;
    if (*psVar7 == 2) {
      uVar8 = 0x32;
    }
    puVar6 = (undefined4 *)mem_GetMemEx_probably_alloc(uVar8,4,0,s_AUDIO_Temp_WaveformatEx_0055e474)
    ;
    if (puVar6 != (undefined4 *)0x0) {
      puVar9 = puVar6;
      for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *(undefined4 *)psVar7;
        psVar7 = psVar7 + 2;
        puVar9 = puVar9 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)puVar9 = (char)*psVar7;
        psVar7 = (short *)((int)psVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      uVar2 = *(ushort *)(piVar3 + 1);
      *(ushort *)((int)piVar3 + 0x1e) = *(ushort *)((int)piVar3 + 6);
      *(ushort *)((int)piVar3 + 0x2a) = uVar2;
      piVar3[9] = (uint)uVar2 * *piVar3 >> 3;
      *(undefined2 *)(piVar3 + 7) = 1;
      piVar3[8] = *piVar3;
      *(short *)(piVar3 + 10) =
           (short)((int)((uint)*(ushort *)((int)piVar3 + 6) * (uint)uVar2) >> 3);
      *(undefined2 *)(piVar3 + 0xb) = 0;
      piVar3[0xc] = 1;
      iVar4 = acmStreamOpen(&param_1,0,puVar6,piVar3 + 7,0,0,0,4);
      piVar3[0xd] = iVar4;
      if (iVar4 == 0) {
        piVar1 = piVar3 + 6;
        piVar3[0xc] = 2;
        iVar4 = acmStreamSize(param_1,piVar3[3],piVar1,0);
        piVar3[0xd] = iVar4;
        if ((iVar4 == 0) && (*piVar1 != 0)) {
          iVar4 = mem_GetMemEx_probably_alloc(*piVar1 + param_3,4,0,s_AUDIO_ADPCM_BUFFER_0055e460);
          piVar3[5] = iVar4;
          if (iVar4 != 0) {
            iStack_48 = piVar3[2];
            iStack_44 = piVar3[3];
            iStack_38 = iVar4 + param_3;
            iStack_34 = *piVar1;
            piVar3[0xc] = 3;
            uStack_54 = 0x54;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_40 = 0;
            uStack_3c = 0;
            iStack_30 = 0;
            uStack_2c = 0;
            iVar4 = acmStreamPrepareHeader(param_1,&uStack_54,0);
            piVar3[0xd] = iVar4;
            if (iVar4 == 0) {
              piVar3[0xc] = 4;
              iVar4 = acmStreamConvert(param_1,&uStack_54,0);
              piVar3[0xd] = iVar4;
              if (iVar4 == 0) {
                *piVar1 = iStack_30;
                piVar3[0xc] = 5;
                iVar4 = acmStreamUnprepareHeader(param_1,&uStack_54,0);
                piVar3[0xd] = iVar4;
                if (iVar4 == 0) {
                  piVar3[0xc] = 6;
                  iVar4 = acmStreamClose(param_1,0);
                  piVar3[0xd] = iVar4;
                  if (iVar4 == 0) {
                    OurFreeMem(puVar6);
                    return piVar3[5];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  OurFreeMem(puVar6);
  OurFreeMem(piVar3[5]);
  piVar3[5] = 0;
  return 0;
}

