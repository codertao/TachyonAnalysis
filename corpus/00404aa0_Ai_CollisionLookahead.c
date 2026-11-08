
/* AI post-think every 16 frames: ray to pos+(vel+fwd*3)*350 with filter Ai_LookaheadFilter; hit ->
   Ai_AvoidCollision */

void Ai_CollisionLookahead(int param_1)

{
  int iVar1;
  vec3 vStack_30;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [24];
  
  if ((((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) && (*(short *)(param_1 + 0x352) == 0)
     ) {
    vStack_30.x = 0;
    vStack_30.y = 0;
    vStack_30.z = 3;
    call_math_todo_with_rotation
              (auStack_18,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
    call_copy_mathresult_to_global(auStack_18);
    some_rotate_by_global(&vStack_30,&vStack_30);
    iStack_24 = *(int *)(param_1 + 0x34) + (*(int *)(param_1 + 0xa0) + vStack_30.x) * 0x15e;
    iStack_20 = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0xa4) + vStack_30.y) * 0x15e;
    iStack_1c = *(int *)(param_1 + 0x3c) + (*(int *)(param_1 + 0xa8) + vStack_30.z) * 0x15e;
    iVar1 = FUN_00419090(param_1 + 0x34,&iStack_24,*(int *)(param_1 + 100) + 0x14,param_1,
                         Ai_LookaheadFilter);
    if (iVar1 != 0) {
      Ai_AvoidCollision(param_1);
    }
  }
  return;
}

