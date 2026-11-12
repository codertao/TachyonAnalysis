
/* sweep: sets +0x327 when power+0x18 >= desc+0x110/4 */

void Ai_UpdateBoostReady(int param_1)

{
  if ((*(char *)(param_1 + 0x327) == '\0') &&
     (*(int *)(*(int *)(param_1 + 0x8c) + 0x110) >> 2 <= *(int *)(param_1 + 0x124))) {
    *(undefined1 *)(param_1 + 0x327) = 1;
  }
  return;
}

