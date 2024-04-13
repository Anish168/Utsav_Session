// import Controls from "./Components/Controls";
// import DisplayCounter from "./Components/DisplayCounter";
// import Header from "./Components/Header";
// import Modal from "./Components/Modal";
// import "./styles.css";
// import "bootstrap/dist/css/bootstrap.min.css";
// export default function App() {
//   return (
//     <center class="px-4 py-5 my-5 text-center">
//       <Modal>
//         <Header />
//         <div class="col-lg-6 mx-auto">
//           <DisplayCounter />
//           <Controls />
//         </div>
//       </Modal>
//     </center>
//   );
// }
import Controls from "./Components/Controls";
import DisplayCounter from "./Components/DisplayCounter";
import Header from "./Components/Header";
import Modal from "./Components/Modal";
import PrivacyMessage from "./Components/PrivacyMessage";
import "./styles.css";
import "bootstrap/dist/css/bootstrap.min.css";
import { useSelector } from "react-redux";
export default function App() {
  const privacy = useSelector((store) => store.privacy);

  return (
    <center class="px-4 py-5 my-5 text-center">
      <Modal>
        <Header />
        <div class="col-lg-6 mx-auto">
          {privacy ? <PrivacyMessage /> : <DisplayCounter />}
          <Controls />
        </div>
      </Modal>
    </center>
  );
}
