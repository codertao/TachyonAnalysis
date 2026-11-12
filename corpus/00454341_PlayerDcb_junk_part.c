
/* sweep: mis-split bytes */

void PlayerDcb_junk_part(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX * 2) = 0x95e8016a;
  return;
}

