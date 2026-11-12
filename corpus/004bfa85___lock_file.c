
/* CRT */

void __lock_file(uint param_1)

{
  if ((0x56160f < param_1) && (param_1 < 0x561871)) {
    __lock(((int)(param_1 - 0x561610) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

