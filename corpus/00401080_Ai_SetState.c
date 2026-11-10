
/* state table row: call enter (+0), +0x104 = state, +0x325 = row+0xc 'busy' flag, +0x304 = row+4
   think; re-arms Ai_CollisionLookahead */

undefined4 Ai_SetState(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (0xe < param_2) {
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x33c) + param_2 * 0x10);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(param_1);
  }
  *(uint *)(param_1 + 0x104) = param_2;
  *(undefined1 *)(param_1 + 0x325) = *(undefined1 *)(puVar2 + 3);
  *(undefined4 *)(param_1 + 0x304) = puVar2[1];
  *(code **)(param_1 + 0x6c) = Ai_CollisionLookahead;
  return uVar1;
}

