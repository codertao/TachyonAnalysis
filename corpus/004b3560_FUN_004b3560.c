
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004b3560(float param_1,float *param_2,undefined4 param_3,int param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_4;
  
  fVar3 = param_5;
  puVar6 = *(undefined4 **)(param_4 + 0x18);
  uVar5 = 0;
  local_4 = param_1;
  if (*(int *)(param_4 + 0xc) != 0) {
    do {
      pfVar1 = (float *)*puVar6;
      pfVar2 = (float *)puVar6[3];
      if ((float)_DAT_0052ef68 <=
          (*param_2 - *pfVar1) * *pfVar2 +
          (param_2[1] - pfVar1[1]) * pfVar2[1] + (param_2[2] - pfVar1[2]) * pfVar2[2]) {
        fVar7 = (float10)FUN_004b33e0(pfVar2,pfVar1,param_2,param_3);
        if (((float10)_DAT_0052e598 <= fVar7) && ((float)fVar7 <= _DAT_0052e59c)) {
          FUN_004b3450(fVar3,param_2,param_3,(float)fVar7);
          iVar4 = FUN_004b3500(fVar3,puVar6);
          if (iVar4 != 0) {
            puVar6[0x11] = 1;
            _DAT_00668f28 = uVar5;
            FUN_004b34a0(fVar3,puVar6,&param_5,&local_4);
            if ((((_DAT_0052e598 <= param_5) && (param_5 <= _DAT_0052e59c)) &&
                (_DAT_0052e598 <= local_4)) &&
               ((local_4 <= _DAT_0052e59c && (param_5 + local_4 <= _DAT_0052e59c)))) {
              return 1;
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x12;
    } while (uVar5 < *(uint *)(param_4 + 0xc));
  }
  return 0;
}

