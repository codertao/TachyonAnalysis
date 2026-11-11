
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hit desc+0x6c veto; restore last safe pose (+0xe0/+0xec); 50-frame cooldown 0x5b2118;
   shake+sound; hit +0x88 handler or send 0x2009; bounce vel*-0.95, or deflect (jitter +-0x200000,
   vel*0.85/0.55, cooldown 100) */

void PlayerShip_OnCollision(int param_1,float param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  int local_c;
  longlong lStack_8;
  
  iVar4 = (int)param_2;
  local_c = 1;
  if (((*(int *)((int)param_2 + 0x8c) != 0) &&
      (pcVar2 = *(code **)(*(int *)((int)param_2 + 0x8c) + 0x6c), pcVar2 != (code *)0x0)) &&
     (iVar3 = (*pcVar2)(param_2,param_1,&local_c), iVar3 == 0)) {
    return;
  }
  if (*(code **)(param_1 + 0x68) != FUN_00454f30) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0xe8);
    piVar1 = (int *)(param_1 + 0x4c);
    *piVar1 = *(int *)(param_1 + 0xec);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xf4);
    if (DAT_005b2118 == 0) {
      param_2 = DAT_005b1ecc;
      if (DAT_005b1ecc < _DAT_0052e598) {
        param_2 = 0.0;
      }
      fVar6 = (float10)Flight_CruiseTopSpeed(DAT_005b1f0c + 0x84,DAT_005b9020);
      fVar6 = ((float10)param_2 / fVar6) * (float10)_DAT_0052e594;
      if (fVar6 < (float10)_DAT_0052e648) {
        fVar6 = (float10)_DAT_0052e648;
      }
      fVar6 = fVar6 * (float10)_DAT_0052ea78;
      if (fVar6 < (float10)_DAT_0052ea74) {
        fVar6 = (float10)_DAT_0052ea74;
      }
      _DAT_005b1ed8 = (float)((float10)_DAT_005b1ed8 + fVar6);
      FUN_004666e0(1,2,1,param_1,0x10000);
      pcVar2 = *(code **)(iVar4 + 0x88);
      if (pcVar2 == (code *)0x0) {
        if (local_c != 0) {
          lStack_8 = (longlong)ROUND(param_2);
          NetCli_SendCollision((undefined4)lStack_8,0);
        }
      }
      else {
        lStack_8 = (longlong)ROUND(param_2);
        iVar4 = (*pcVar2)(iVar4,(undefined4)lStack_8);
        if (iVar4 == 0) {
          uVar5 = global_bad_shift_rng();
          *piVar1 = *piVar1 + ((uVar5 & 0x400000) - 0x200000);
          uVar5 = global_bad_shift_rng();
          *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + ((uVar5 & 0x400000) - 0x200000);
          uVar5 = global_bad_shift_rng();
          lStack_8._0_4_ =
               (undefined4)(longlong)ROUND((float)*(int *)(param_1 + 0xa0) * _DAT_0052ea6c);
          *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((uVar5 & 0x400000) - 0x200000);
          *(undefined4 *)(param_1 + 0xa0) = (undefined4)lStack_8;
          lStack_8._0_4_ =
               (undefined4)(longlong)ROUND((float)*(int *)(param_1 + 0xa4) * _DAT_0052ea6c);
          *(undefined4 *)(param_1 + 0xa4) = (undefined4)lStack_8;
          lStack_8 = (longlong)ROUND((float)*(int *)(param_1 + 0xa8) * _DAT_0052ea68);
          *(undefined4 *)(param_1 + 0xa8) = (undefined4)lStack_8;
          DAT_005b2118 = 100;
          FUN_004a0760(0,0xffffd8f0,500000,1);
          return;
        }
      }
      lStack_8._0_4_ = (undefined4)(longlong)ROUND((float)*(int *)(param_1 + 0xa0) * _DAT_0052ea70);
      *(undefined4 *)(param_1 + 0xa0) = (undefined4)lStack_8;
      lStack_8._0_4_ = (undefined4)(longlong)ROUND((float)*(int *)(param_1 + 0xa4) * _DAT_0052ea70);
      *(undefined4 *)(param_1 + 0xa4) = (undefined4)lStack_8;
      lStack_8 = (longlong)ROUND((float)*(int *)(param_1 + 0xa8) * _DAT_0052ea70);
      *(undefined4 *)(param_1 + 0xa8) = (undefined4)lStack_8;
      FUN_004a0760(0,0xffffd8f0,500000,1);
      _DAT_005b1e98 = -_DAT_005b1e98;
      DAT_005b2118 = 0x32;
      _DAT_005b1e9c = -_DAT_005b1e9c;
      _DAT_005b1ea0 = -_DAT_005b1ea0;
      return;
    }
  }
  return;
}

