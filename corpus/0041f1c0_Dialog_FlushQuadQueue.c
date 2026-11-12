
/* sweep */

void Dialog_FlushQuadQueue(Pool *param_1,undefined4 param_2)

{
  Pool *head;
  void *pvVar1;
  void *node;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  head = param_1 + 1;
  node = head->mem;
  if (node == (void *)0x0) {
    *(undefined4 *)&param_1[1].field_0x8 = 0;
    head->mem = (void *)0x0;
    return;
  }
  do {
    pvVar1 = *(void **)((int)node + 8);
    if (*(int *)((int)node + 0x24) != 0) {
      local_14 = *(undefined4 *)((int)node + 0x28);
      local_c = *(undefined4 *)((int)node + 0x2c);
      local_8 = 0xffffffff;
      local_4 = 0xffffffff;
      local_18 = 7;
      local_10 = 0;
      Mission_PostEvent(&local_18,param_2);
    }
    List_Remove(node,&head->mem);
    Pool_Free(param_1,node);
    node = pvVar1;
  } while (pvVar1 != (void *)0x0);
  head->mem = (void *)0x0;
  *(undefined4 *)&param_1[1].field_0x8 = 0;
  return;
}

