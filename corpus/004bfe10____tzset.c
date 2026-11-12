
/* CRT */

void ___tzset(void)

{
  if (DAT_00565080 == 0) {
    __lock(0xb);
    if (DAT_00565080 == 0) {
      __tzset_lk();
      DAT_00565080 = DAT_00565080 + 1;
    }
    __unlock(0xb);
  }
  return;
}

