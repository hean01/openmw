#ifndef CSM_TOOLS_CLASSCHECK_H
#define CSM_TOOLS_CLASSCHECK_H

#include <components/esm/loadclas.hpp>

#include "../world/idcollection.hpp"

#include "stage.hpp"

namespace CSMTools
{
    /// \brief VerifyStage: make sure that class records are internally consistent
    class ClassCheckStage : public Stage
    {
            const CSMWorld::IdCollection<ESM::Class>& mClasses;

        public:

            ClassCheckStage (const CSMWorld::IdCollection<ESM::Class>& classes);

            virtual int setup();
            ///< \return number of steps

            virtual void perform (int stage, std::vector<std::string>& messages);
            ///< Messages resulting from this tage will be appended to \a messages.
    };
}

#endif
