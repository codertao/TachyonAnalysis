
int FUN_004e665b(void)

{
  int in_EAX;
  int unaff_EDI;
  
  return (*(ushort *)(in_EAX * 8 + *(int *)(unaff_EDI + 4) + 2) + 1) - *(int *)(unaff_EDI + 0x14);
}

