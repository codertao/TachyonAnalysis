
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* place ship back along heading by the decel distance, HyperInHook */

void CapShip_HyperIn(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = _DAT_0052e598;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  fVar1 = *(float *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  fVar2 = *(float *)(param_1 + 0xd4);
  *(code **)(param_1 + 0x134) = CapShip_HyperInHook;
  do {
    fVar1 = fVar1 + _DAT_0052e5ec;
    fVar2 = fVar1 + fVar2;
    fVar3 = fVar2 + fVar3;
  } while (fVar2 <= _DAT_0052e550);
  *(float *)(param_1 + 0xd4) = fVar2;
  *(float *)(param_1 + 0xf8) = fVar1;
  Ent_PointAhead(param_1,-fVar3);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  SrvSend_EntityDestroyed((int *)(param_1 + 0x34),7,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
  clr_bytes(param_1 + 0xa0,0xc);
  Ent_SetPosRaw(*(undefined4 *)(param_1 + 100),1);
  return;
}

