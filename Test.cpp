#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

void thisIsATest() {
	ASSERTM("start writing tests", false);	
}

void testCorreoCorrecto(list<Usuario> u){
	string correot="i@uco.es";
	ASSERT_EQUAL(1,CorCorreo(u,correot));
}
void testCorreoError(list<Usuario> u){
	string correot="i";
	ASSERT_EQUAL(0,CorCorreo(u,correot));
}
void testmaquinaCorrecto(list<Maquina> m){
	string maqui="1";
	ASSERT_EQUAL(true,exitmaquina(m,maqui));
}
void testmaquinaError(list<Maquina> m){
	string maqui="ma1";
	ASSERT_EQUAL(false,exitmaquina(m,maqui));
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(thisIsATest));
	s.push_back(CUTE(testCorreoCorrecto));
	s.push_back(CUTE(testCorreoErroneo));
	s.push_back(CUTE(testmaquinaCorrecto));
	s.push_back(CUTE(testmaquinaError));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
