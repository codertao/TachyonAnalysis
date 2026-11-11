
void * FUN_00466ad0(void)

{
  void *node;
  
  node = Pool_Alloc((Pool *)&DAT_00589760);
  if (node != (void *)0x0) {
    List_PushFront(node,(void **)&DAT_005897a4);
  }
  return node;
}

