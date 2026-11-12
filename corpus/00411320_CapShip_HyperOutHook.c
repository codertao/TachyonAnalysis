
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* accelerate; past limit post {OBJ, code 8}, unspawn */

void CapShip_HyperOutHook(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  fVar1 = *(float *)(param_1 + 0xf8) + _DAT_0052e5ec;
  *(float *)(param_1 + 0xf8) = fVar1;
  fVar1 = fVar1 + *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0xd4) = fVar1;
  Ent_PointAhead(param_1,fVar1);
  if (_DAT_0052e550 <= *(float *)(param_1 + 0xd4)) {
    Sped_BroadcastNamedMsg
              (*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),*(undefined4 *)(param_1 + 0xd8),
               param_1 + 0xec,99,*(undefined4 *)(param_1 + 100));
    SrvSend_EntityDestroyed(param_1 + 0x34,7,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
    uStack_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
    uStack_18 = 1;
    uStack_10 = 8;
    uStack_c = 0;
    uStack_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
    Mission_PostEvent(&uStack_18,*(undefined4 *)(param_1 + 100));
    uVar2 = Sped_GetDefList(*(int *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 100),
                            *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x5c),param_1 + 0x144);
    Sped_SaveAliasState(uVar2);
    CapShip_RemoveForHyper(param_1);
  }
  return;
}

