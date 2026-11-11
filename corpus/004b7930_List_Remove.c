
/* also clears node+0x14 */

void __cdecl List_Remove(void *node,void **head)

{
  if (node == *head) {
    *head = *(void **)((int)node + 8);
    if (*(int *)((int)node + 8) != 0) {
      *(undefined4 *)(*(int *)((int)node + 8) + 4) = 0;
      *(undefined4 *)((int)node + 8) = 0;
      *(undefined4 *)((int)node + 4) = 0;
      *(undefined1 *)((int)node + 0x14) = 0;
      return;
    }
  }
  else {
    if ((*(int *)((int)node + 8) == 0) && (*(int *)((int)node + 4) == 0)) goto LAB_004b7980;
    *(int *)(*(int *)((int)node + 4) + 8) = *(int *)((int)node + 8);
    if (*(int *)((int)node + 8) != 0) {
      *(undefined4 *)(*(int *)((int)node + 8) + 4) = *(undefined4 *)((int)node + 4);
    }
  }
  *(undefined4 *)((int)node + 8) = 0;
  *(undefined4 *)((int)node + 4) = 0;
LAB_004b7980:
  *(undefined1 *)((int)node + 0x14) = 0;
  return;
}

