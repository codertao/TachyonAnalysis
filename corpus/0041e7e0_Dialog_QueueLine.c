
/* sweep */

undefined4
Dialog_QueueLine(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  Pool *pool;
  void *node;
  
  pool = *(Pool **)(param_5 + 0x5c);
  node = Pool_Alloc(pool);
  if (node == (void *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)node + 0x18) = param_1;
  *(undefined4 *)((int)node + 0x1c) = param_2;
  *(undefined4 *)((int)node + 0x20) = param_4;
  *(undefined4 *)((int)node + 0x2c) = param_7;
  *(undefined4 *)((int)node + 0x28) = param_6;
  *(undefined4 *)((int)node + 0x24) = param_8;
  if (((pool[1].mem == (void *)0x0) && (pool[1].freeHead == (void *)0x0)) &&
     (param_3 != (void *)0x0)) {
    pool[1].freeHead = param_3;
  }
  List_Append(node,&pool[1].mem);
  return 1;
}

