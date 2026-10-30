
void FUN_0049a590(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  char *pcVar8;
  float *pfVar9;
  float *pfVar10;
  char *pcVar11;
  float10 fVar12;
  float local_110;
  float local_10c;
  float local_104;
  char local_100 [256];
  
  iVar4 = *(int *)(param_1 + 0x18);
  pfVar9 = *(float **)(param_1 + 0x28);
  do {
    if (iVar4 == 0) {
      return;
    }
    Cbin_FindSection(*pfVar9,param_1);
    local_110 = pfVar9[3];
    if (local_110 != 0.0) {
      pfVar10 = (float *)pfVar9[6];
      do {
        if (pfVar10 == (float *)0x0) break;
        local_10c = pfVar10[3];
        if (local_10c != 0.0) {
          pfVar7 = *(float **)(param_1 + 0x4c);
          pfVar10[4] = (float)pfVar7;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (int)local_10c * 0x14;
          local_104 = 1.4013e-45;
          do {
            if (pfVar7 == (float *)0x0) break;
            pfVar7[4] = local_104;
            pfVar7[2] = *pfVar10;
            pfVar7[1] = *pfVar9;
            if (local_104 == 1.4013e-45) {
              Cbin_FindParam(pfVar7[2],local_100,0x100,0,4,1);
            }
            else {
              Cbin_GetParamN_Ctx(pfVar7[2],local_100,0x100,0,4,local_104,param_1);
            }
            iVar2 = FUN_00499be0(local_100);
            if (iVar2 == 0) {
              uVar5 = 0xffffffff;
              pcVar8 = local_100;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              *pfVar7 = *(float *)(param_1 + 0x54);
              uVar6 = 0xffffffff;
              *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ~uVar5;
              pcVar8 = local_100;
              do {
                pcVar11 = pcVar8;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar11 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar11;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              pcVar8 = pcVar11 + -uVar6;
              pcVar11 = (char *)*pfVar7;
              for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar11 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar11 = pcVar11 + 1;
              }
              pfVar7[3] = 5.60519e-45;
            }
            else if (iVar2 == 2) {
              fVar12 = (float10)FUN_004bd36f(local_100);
              *pfVar7 = (float)fVar12;
              pfVar7[3] = 2.8026e-45;
            }
            else {
              fVar3 = (float)FUN_004bd32f(local_100);
              *pfVar7 = fVar3;
              pfVar7[3] = 1.4013e-45;
            }
            pfVar7 = pfVar7 + 5;
            local_104 = (float)((int)local_104 + 1);
            local_10c = (float)((int)local_10c + -1);
          } while (local_10c != 0.0);
        }
        pfVar10 = pfVar10 + 5;
        local_110 = (float)((int)local_110 + -1);
      } while (local_110 != 0.0);
    }
    pfVar9 = pfVar9 + 7;
    iVar4 = iVar4 + -1;
  } while( true );
}

