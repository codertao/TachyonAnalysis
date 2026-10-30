
void FUN_004e674e(void)

{
  int in_EAX;
  
  if (DAT_00604488 == 0x20) {
    DAT_004e54b4 = (&PTR_LAB_004e5500)[in_EAX];
  }
  else if (DAT_00604488 == 0x10) {
    DAT_004e54b4 = (&PTR_LAB_004e54ec)[in_EAX];
  }
  else {
    DAT_004e54b4 = (&PTR_LAB_004e54d8)[in_EAX];
  }
  return;
}

