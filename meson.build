project('pucxobot', 'c')

cc = meson.get_compiler('c')

foreach a : ['-Wall', '-Wuninitialized', '-Wempty-body', '-Wformat',
      '-Wformat-security', '-Winit-self', '-Wundef',
      '-Wvla', '-Wpointer-arith', '-Wmissing-declarations']
  if cc.has_argument(a)
    add_project_arguments(a, language : ['c'])
  endif
endforeach

configinc = include_directories('.')

cdata = configuration_data()

if build_machine.endian() == 'little'
   cdata.set('HAVE_LITTLE_ENDIAN', true)
elif build_machine.endian() == 'big'
   cdata.set('HAVE_BIG_ENDIAN', true)
endif

subdir('src')
subdir('web')

configure_file(output : 'config.h', configuration : cdata)
