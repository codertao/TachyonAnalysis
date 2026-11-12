
/* CRT */

void __unlock_file2(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    __unlock(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

