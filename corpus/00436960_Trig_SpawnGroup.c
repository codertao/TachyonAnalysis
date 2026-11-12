
/* spawn all placements whose group(+0x54)==arg; delay -1 = immediate else staggered by 150 */

void Trig_SpawnGroup(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar2 = param_4;
  iVar1 = *(int *)(param_4 + 0x54);
  uVar3 = 0;
  param_4 = 0;
  local_c = 0;
  if (iVar1 != 0) {
    if (DAT_005a6730 != 0) {
      Trig_LogSpawnGroup(param_1);
    }
    psVar4 = *(short **)(*(int *)(iVar2 + 0x54) + 0x18);
    local_8 = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      do {
        if ((*psVar4 == 3) && (*(int *)(psVar4 + 0x2a) == param_1)) {
          if (local_c == 0) {
            local_c = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x20 + *(int *)(psVar4 + 2) * 0x24)
                              + 0x18);
          }
          if (param_2 == -1) {
            local_4 = Sped_SpawnSimple(*(undefined4 *)(psVar4 + 0x10),0,0,iVar2);
          }
          else {
            SpawnQueue_Add(*(undefined4 *)(psVar4 + 0x10),param_2,uVar3);
            uVar3 = 0x96;
          }
          if (local_4 != 0) {
            param_4 = param_4 + 1;
          }
        }
        psVar4 = (short *)((int)psVar4 + (uint)(ushort)psVar4[1]);
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)(iVar1 + 0x14));
      if (param_4 != 0) {
        Sped_MsgSpawned(iVar2,param_4,local_c);
      }
    }
  }
  return;
}

