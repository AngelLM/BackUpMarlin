#ifndef VIEW_MANAGER_H
#define	VIEW_MANAGER_H

#include <stdint.h>

#include "Screen.h"
#include "GuiImpl_witbox_2.h"

namespace screen
{
	class ViewManager
	{
		public:
			static ViewManager & getInstance();

			void activeView(ScreenIndex_t const & index);
			Screen * activeView();
			void setLastFocus(uint16_t last_focus);

		protected:
			ViewManager();
			~ViewManager();

		private:
			ViewManager(ViewManager const & orig);
			ViewManager & operator=(ViewManager & orig);

		private:
			Screen * m_active_view;
			uint16_t m_last_focus;
	};
}


#endif //VIEW_MANAGER_H