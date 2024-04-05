import Footer from "./Components/Footer";
import Header from "./Components/Header";
import Sidebar from "./Components/Sidebar";
import CreatePost from "./Components/CreatePost";
import "./styles.css";
import "bootstrap/dist/css/bootstrap.min.css";
import PostList from "./Components/PostList";
import { useState } from "react";
import PostListProvider from "./store/post-list-store";
// export default function App() {
//   return (
// <div className="app-container">
//   <Sidebar />
//   <div className="content">
//     <Header />
//     <CreatePost />
//     <PostList />
//     <Footer />
//   </div>
// </div>

//   );
// }

// export default function App() {
//   const [selectedTab, setselectedTab] = useState("Home");
//   return (
//       <div className="app-container">
//         <Sidebar selectedTab={selectedTab} setselectedTab={setselectedTab} />
//         <div className="content">
//           <Header />
//           {selectedTab === "Home" ? <PostList /> : <CreatePost />}
//           <Footer />
//         </div>
//       </div>
//   );
// }
export default function App() {
  const [selectedTab, setselectedTab] = useState("Home");
  return (
    <PostListProvider>
      <div className="app-container">
        <Sidebar selectedTab={selectedTab} setselectedTab={setselectedTab} />
        <div className="content">
          <Header />
          {selectedTab === "Home" ? <PostList /> : <CreatePost />}
          <Footer />
        </div>
      </div>
    </PostListProvider>
  );
}
