
void __cdecl List_Append(void *node,void **head)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *head;
  if (pvVar1 != (void *)0x0) {
    for (pvVar2 = *(void **)((int)pvVar1 + 8); pvVar2 != (void *)0x0;
        pvVar2 = *(void **)((int)pvVar2 + 8)) {
      pvVar1 = pvVar2;
    }
    *(undefined4 *)((int)node + 8) = 0;
    *(void **)((int)pvVar1 + 8) = node;
    *(void **)((int)node + 4) = pvVar1;
    return;
  }
  List_PushFront(node,head);
  return;
}

