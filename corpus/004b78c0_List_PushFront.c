
/* intrusive list via node+8 next / +4 prev */

void __cdecl List_PushFront(void *node,void **head)

{
  *(void **)((int)node + 8) = *head;
  *head = node;
  *(undefined4 *)((int)node + 4) = 0;
  if (*(int *)((int)node + 8) != 0) {
    *(void **)(*(int *)((int)node + 8) + 4) = node;
  }
  return;
}

