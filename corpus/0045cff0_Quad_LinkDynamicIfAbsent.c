
/* sweep */

void Quad_LinkDynamicIfAbsent(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Quad_DynamicContains(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = param_1;
  }
  return;
}

