
/* def+0x64: move, life--, smoke trail Proj_EmitTrail if def+0x7c&1 on client copies */

void Proj_ThinkBolt(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  iVar1 = *(int *)(param_1 + 0xd4) + -1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xd4) = iVar1;
  if (iVar1 == 0) {
    FUN_0041b8c0(param_1);
  }
  if (((*(byte *)(*(int *)(param_1 + 0xdc) + 0x7c) & 1) != 0) && (*(int *)(param_1 + 0xd8) == 1)) {
    Proj_EmitTrail(param_1,*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x80));
  }
  return;
}

