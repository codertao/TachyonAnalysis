
/* sweep */

void * Orders_Alloc(undefined4 *param_1,Pool *param_2)

{
  void *node;
  int iVar1;
  undefined4 *puVar2;
  
  node = Pool_Alloc(param_2);
  if (node == (void *)0x0) {
    return (void *)0x0;
  }
  puVar2 = (undefined4 *)((int)node + 0x18);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  List_PushFront(node,&param_2[1].mem);
  param_2[1].freeHead = (void *)((int)param_2[1].freeHead + 1);
  return node;
}

