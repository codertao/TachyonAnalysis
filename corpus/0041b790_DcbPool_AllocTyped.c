
/* sweep: Pool_Alloc + netId + poolType */

void DcbPool_AllocTyped(Pool *param_1,undefined2 param_2,undefined4 param_3)

{
  void *pvVar1;
  
  pvVar1 = Pool_Alloc(param_1);
  if (pvVar1 != (void *)0x0) {
    if (param_1[1].mem != (uint *)0x0) {
      *(uint *)((int)pvVar1 + 0x78) = *(uint *)param_1[1].mem | 1;
      *(int *)param_1[1].mem = *(int *)param_1[1].mem + 2;
    }
    *(undefined2 *)((int)pvVar1 + 0x76) = param_2;
    *(undefined4 *)((int)pvVar1 + 100) = param_3;
  }
  return;
}

