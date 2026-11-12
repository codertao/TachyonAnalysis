
/* sweep */

void ChatInput_Backspace(void)

{
  if (DAT_005b91c4 != 0) {
    *(undefined1 *)((int)&DAT_005b90c0 + DAT_005b91c4 + 3) = 0;
    DAT_005b91c4 = DAT_005b91c4 + -1;
  }
  return;
}

