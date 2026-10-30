
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00564f74 == 1) {
    FUN_004c4c12();
  }
  FUN_004c4c4b(param_1);
  (*(code *)PTR___exit_005615d4)(0xff);
  return;
}

