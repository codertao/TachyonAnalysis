
void FUN_004368b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  void *node;
  
  node = Pool_Alloc((Pool *)(param_4 + 0x94));
  if (node != (void *)0x0) {
    *(undefined4 *)((int)node + 0x18) = param_1;
    *(undefined4 *)((int)node + 0x1c) = param_2;
    *(undefined4 *)((int)node + 0x20) = param_3;
    List_Append(node,(void **)(param_4 + 0xb8));
  }
  return;
}

