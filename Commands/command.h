#ifndef COMMAND_H
#define COMMAND_H
#include<QUrl>
#include<memory>


#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

class Command
{
protected:
    //std::shared_ptr<Parameters> params;

public:
    Command(){}
//    void set_parameters(std::shared_ptr<Parameters> parameters){
//        params = parameters;
//    }

//    Parameters& get_params_handle();
//    void set_view_model(std::shared_ptr<ViewModel> viewmodel);
     virtual void exec(void *,int) = 0;
};

#endif // COMMAND_H
