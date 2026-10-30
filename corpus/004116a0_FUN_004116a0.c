
void FUN_004116a0(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffe;
    return;
  }
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 1;
  return;
}

